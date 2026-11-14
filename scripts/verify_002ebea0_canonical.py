#!/usr/bin/env python3
"""Link the canonical C++17 probe to the existing fixtures and i686 oracle."""
import argparse
from pathlib import Path
import subprocess
import sys
import tempfile

from verify_002ebea0_stack_probe import ASM, NATIVE, ROOT, TEST, native_body

sys.path.insert(0, str(ROOT / "tools"))
from source_layout import source_path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--cc", default="clang")
    parser.add_argument("--cxx", default="clang++")
    args = parser.parse_args()
    source = source_path(ROOT, "0x002ebea0")
    with tempfile.TemporaryDirectory(prefix="bf-canonical-stack-probe-") as temp:
        directory = Path(temp)
        model = directory / "model.o"
        fixture = directory / "fixture.o"
        common = ["-Wall", "-Wextra", "-Werror", "-pedantic-errors", "-I", str(ROOT / "include")]
        native = sys.platform == "win32"
        target = ["-target", "i686-pc-windows-msvc"] if native else []
        for optimization in ("-O0", "-O2"):
            options = [*common, *target, optimization]
            subprocess.run([args.cxx, "-std=c++17", *options, "-c", str(source), "-o", str(model)], check=True)
            defines = ["-DBF_STACK_PROBE_CANONICAL"]
            if native:
                defines.append("-DBF_STACK_PROBE_NATIVE")
            subprocess.run([args.cc, "-std=c11", *options, *defines, "-c", str(TEST),
                            "-o", str(fixture)], check=True)
            executable = directory / ("probe.exe" if native else "probe")
            link = [args.cc, *target, str(model), str(fixture)]
            if native:
                exports = directory / "oracle.def"
                exports.write_text("EXPORTS\nbf_stack_probe_native_begin\nbf_stack_probe_native_end\n",
                                   encoding="utf-8")
                link += ["-std=c11", *options, *defines, str(NATIVE), str(ASM), "-Wl,/def:" + str(exports)]
            subprocess.run([*link, "-o", str(executable)], check=True)
            if native:
                native_body(executable)
                print("PASS assembled 65-byte i686 body matches original SHA-256", flush=True)
            subprocess.run([str(executable)], check=True)


if __name__ == "__main__":
    main()
