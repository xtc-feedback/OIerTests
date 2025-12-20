import subprocess
import sys
import glob
import os

def main():
    with open("stdin.txt", "r", encoding="utf-8") as f:
        input_data = f.read()

        cpp_files = glob.glob("*.cpp")
        if not cpp_files:
            print("Compilation Error: no .cpp files found")
            return 1
        src = "main.cpp" if "main.cpp" in cpp_files else cpp_files[0]

        compile_proc = subprocess.run(["g++", src, "-o", "main"], stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        if compile_proc.returncode != 0:
            print("Compilation Error")
            if compile_proc.stderr:
                print(compile_proc.stderr.decode("utf-8"))
            return 1

        exe = "./main" if os.name != 'nt' else "main.exe"
        process = subprocess.Popen([exe], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        process.stdin.write(str(input_data + "\n").encode("utf-8"))
        process.stdin.close()
        output, error = process.communicate()
        if error:
            print("Error:", error.decode("utf-8"))
            return 1
        print(output.decode("utf-8"))
        with open("stdout.txt", "r", encoding="utf-8") as out_file:
            expected_lines = out_file.read().splitlines()
            actual_lines = list(filter(None, output.decode("utf-8").splitlines()))
            if expected_lines == actual_lines:
                print("AC")
                return 0
            else:
                print("WA")
                return 1

if __name__ == "__main__":
    sys.exit(main())
