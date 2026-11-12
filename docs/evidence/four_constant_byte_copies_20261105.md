# Four bounded constant-offset copy spellings

Each repair changes one existing byte-copy statement, replacing only pointer-to-int intermediates with unsigned-character views at the same fixed offset. Signatures, unresolved pseudo-registers, pointer steps, widths and sequential transfer order remain unchanged.

- 001d6ab0: byte at offset 13, both pointers advance 24 bytes; complete 68-byte/26-instruction body.
- 001dcf70: byte at offset 29, null destination bypasses all memory accesses; complete 65-byte/23-instruction body, with guest RET 4 transport still unresolved.
- 001cfbd0: byte at offset 29, destination advances 36 bytes and source remains fixed and is reread each iteration; complete 83-byte/31-instruction body.
- 001d7730: byte at offset 29, both pointers advance 36 bytes; complete 86-byte/32-instruction body.

Complete raw bodies match their original inventory hashes, have no calls, external branches, flow/length/fallthrough overrides or uncovered bytes, and terminate in the recorded RET. Immutable preimages, postimages, Git blobs, operation schedules and raw body bytes are separately pinned. Reversal recovers each exact source preimage. No existing scoped historical manifest is modified.

The public gate checks original-negative and repaired-positive strict C++17 syntax at O0/O2, 122,750 initialized valid-object cases per build, sequential per-access source reads, aligned overlap in both directions, zero-length/null bypasses, high-bit byte patterns, padding and surrounding sentinels. Twenty-two executable mutants fail by expected model mismatch. Optional private replay rejects 116 metadata/body/flow corruptions. GCC ASan+UBSan checks pass with leak detection disabled. Independent review reruns the entire gate and additionally rejects five source-caching mutants, including fixed-source overlap across iterations.

Run `python3 tools/test_cpp_next_byte_copies.py`. Optional flags `--private-export` and `--sanitize` enable selected private-record replay and GCC sanitizers. No canonical unresolved-register function, original machine code or uploaded script executes. Only explicitly initialized test seams run.

The native-object contract requires live aligned uint32_t storage, valid object extents and nonwrapping array advances to the proper endpoint. Guest32 address wrapping/mapping, guest object layout, register/stack ABI, linking, runtime and rebuild equivalence remain unverified. The supplied program-memory evidence does not reauthenticate the complete original XBE. The unchanged-halfword candidate 001dcf30 remains held for separate object/aliasing justification.
