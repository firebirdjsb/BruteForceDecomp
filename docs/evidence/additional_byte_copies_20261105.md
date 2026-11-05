# Five additional bounded byte-copy spellings

Seven assignments change across five functions. Each replaces pointer-to-int intermediates with unsigned-character views at the same fixed displacement. Definitions, implicit registers, widths, source order, pointer steps and signatures are otherwise unchanged.

- 001ca330, 001d0b20, 001d1f40 and 001d8ad0 each change the byte assignment at offset 13.
- 001d2330 changes offsets 13,69,70 in their original order, including separate final byte transfers and padding gaps.
- 001d0b20 keeps the source fixed and advances the destination 60 bytes. 001d8ad0 advances both pointers 60 bytes. Only these loops have empty-range skips; no single-copy null guards are invented.
- 001d1f40 retains its later DWORD transfers at offsets 48..60 after the original base-register change.

The complete recorded bodies are 95/119/107/122/125 bytes, with no calls, halfword accesses, overrides or missing instruction coverage. Original body hashes, every source preimage/Git blob, seven exact replacements and reversals, and operation/control-flow schedules are pinned. Private replay and independent decoding match all bytes. The whole original XBE is not reauthenticated.

The integrated gate passes strict original-negative/repaired-positive syntax at O0/O2. Original diagnostic counts remain exactly 2/2/2/2/6. Initialized valid-object tests pass 104,239 full-array cases per Clang O0/O2 and GCC ASan+UBSan build, including aligned overlap, all changed-byte values, padding/canaries, loop counts 0..7 and empty loops with unused null inputs. Thirty-one executable mutants fail by model mismatch; 11 source, 45 manifest and 142 private-record corruptions are rejected. Independent models additionally pass 2,080,000 cases plus two empty-null cases per configuration.

The existing 42-caller declaration regression references 001d1f40 and 001d2330. Their signatures remain unchanged and both declaration/provenance and independent-caller parsing tests pass after integration. No historical source-body admission rule is bypassed.

Run `python3 tools/test_cpp_additional_byte_copies.py`; optional `--private-export` and `--sanitize` enable selected original-record replay and GCC sanitizers. Leak detection is disabled for the sandbox; address and undefined-behavior checks remain enabled. Only initialized test seams execute, never canonical unbound-register functions or original game machine-code streams.

The contract requires valid aligned native uint32_t objects and in-range, nonwrapping pointer steps. Register poststate is not proved: 001ca330/001d2330 overwrite CL at the end, while 001d1f40 rebases and later overwrites ECX. Guest layout/address mapping and wrapping, register/stack ABI, linking, complete runtime behavior and byte-identical rebuilding remain unverified.

## Exact-tree checkpoint

The full strict C++17 inventory at commit `83b7d4937f1b0549cce6a8e225ee6bc51fd2f647` checks all 13,694 originals: 4,020 pass (29.3559%) and 9,674 fail, with zero provenance or check errors. Relative to the preceding 4,015-pass checkpoint, exactly the five entries above move from fail to pass; there are no regressions and no changed original-body hashes. The report SHA-256 is `c5e173edbef9b2c23f0f71d90fa0b5fd89aee80889cb78506f5bdbe5e8aa5b22`.

This batch's focused gates pass; it does not claim that the entire test suite is green. The preceding broad run retained 14 known baseline failing subchecks and one baseline error in the historical 21-caller gate. Syntax coverage is not a game build or a 1:1 behavior percentage.
