# Assembly-grounded readable C function names

The 10 currently reviewed function implementations use descriptive C identifiers such as `bf_construct_tagged_byte_record` **in their source definitions**. The header `include/bf_recovered_function_names.h` maps those names back to the existing `FUN_XXXXXXXX` (or conflicting Ghidra library) linker symbols.

This is intentional: Ghidra-derived unreviewed callers still refer to original addresses. The macro aliases provide readable, auditable C source without silently breaking cross-file symbol references or changing executable entry names. All 10 implementations retain their original body SHA-256 and address in comments and `metadata/asm_supported_readable_names.csv`.

Only machine-code-grounded roles have been renamed. No guess is made about gameplay classes or protocols. The `FID_conflict__wprintf` label specifically has disputed CRT identity; `bf_format_to_global_crt_stream` deliberately describes the observed data movement without asserting that it is a wide-character printf.

This header is **not** evidence of verified runtime behavior, linker compatibility, or original source recovery. The non-function named Ghidra labels, including CRT, XDK, graphics and audio functions, are not automatically treated as correct semantic reconstructions.

To verify emitted symbol identity, compile the ten source units as objects and inspect the resulting symbols with `nm` or `llvm-nm`; the defined symbols must still be the original address-based identifiers.
