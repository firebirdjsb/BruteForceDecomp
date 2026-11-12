# Ten retail-XBE-backed guest32 record initializers (7 November 2026)

## Scope and provenance

These ten source files are a bounded source-level guest32 representation of original retail Xbox x86 instructions. The original XBE is authenticated as SHA-256 `B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721`. Its executable bytes are **not** included in this repository. All ten source labels retain their distinct original-address body SHA-256 identifiers.

| Original entry | Bytes | Original body SHA-256 | Host register input | Link offset | Tail offset |
|---|---:|---|---|---:|---:|
| `0x00095cf0` | 75 | `0F3538441D49B226ED4E5098C9EA9AE347BC1BAB440FD802FC232EEC307CB8C6` | `ESI` | `+0x44` | `+0x40` |
| `0x000968e0` | 61 | `0144D044D67307F6BBFE271AFAB9348C6401A897176DD9A93814060F63E1EF2C` | `ESI` | `+0x5C` | `+0x58` |
| `0x00098500` | 59 | `EE6A57E0AED8109D6B74301C9D31E711D5E10C346FCB9C586F8DA93C2576E048` | `ESI` | `+0x5C` | `+0x58` |
| `0x0009c5e0` | 76 | `B3B00C206159F6F348B6EE1573F3E5E1F2AE9684A3B7EBACC303F16ED23624BC` | `ESI` | `+0xDC` | `+0xD8` |
| `0x0009da70` | 70 | `5A3B1C7B2563FC7D6C4493E5DD748F94B2A0FBCB5E1DA387FED8E949293732A2` | `ESI` | `+0x84` | `+0x80` |
| `0x000a1e90` | 61 | `0E0F519CDB3FEE7324564E3D94E2B4E393423A2B91B9A12F3EDA4C25353B5399` | `EDI` | `+0x44` | `+0x40` |
| `0x000a2dc0` | 61 | `F87750C4AC884185F10CE87D6BF8778047D919E17A41AD117ED20CB35729B7CA` | `EDI` | `+0x1C` | `+0x18` |
| `0x000a34a0` | 61 | `C2667195FDC354335126E8C56BFF69617C0041709AD52E3AFDC46DA99D7C5544` | `EDI` | `+0x1C` | `+0x18` |
| `0x000a3b10` | 71 | `01FF57616C921F70EAF7BEBEEF8214CAF60507F7683C4B566EAB18B397E63417` | `EDI` | `+0x30` | `+0x2C` |
| `0x000a6fd0` | 59 | `154B5D2CD6C7B93199924C77D290347322109C9D14A24123763D4656BEBF3357` | `ESI` | `+0x38` | `+0x34` |

The private checker `scripts/verify_20261107_ten_guest32_record_initializers_xbe.py --xbe PATH_TO_PRIVATE_XBE` confirms the 10 full contiguous bodies (654 bytes), 90 original x86 instruction windows, 10 conditional branch targets and 20 original returns, with 654 single-byte mutation controls rejected. The check does not execute the original XBE.

The original instructions initialize exact 8-bit and 32-bit guest-memory fields, create a link at `guest_eax + link_offset`, read the external record's `+8` word **after the writes**, and conditionally write either the internal link or the external successor's `+12` pointer. This relative ordering is important when guest addresses overlap. Host-side function parameters `guest_eax` and `guest_esi`/`guest_edi` are explicit models of incoming registers, **not** recovered native Xbox C++ prototypes.

The strict public test `tools/test_cpp_20261107_ten_guest32_record_initializers.py` compiles and executes the actual ten C++17 translation units at Clang++ O0 and O2 with a standalone byte-addressed mocked guest-memory interface. It independently compares every memory read/write event, the returned guest value and the final memory image across 8,192 cases per function and optimization level (163,840 cases total). Cases cover both conditional branches, guest-address wrap, linked-node overlap, byte-versus-DWORD writes, zero and nonzero external link fields, plus ten intentionally corrupted original source offsets rejected by the same harness.

## Historical source preservation

All ten originals are referenced by the project's older 250-case partial-DWORD compiler regression inventory. Their exact pre-reconstruction source bytes are preserved as separately SHA-pinned fixtures under `tests/fixtures/original_0x*_post_literal_20261107.txt`. The historical verifier (`tools/verify_cpp_literal_declaration_batch.py`) checks the old fixture SHA and body label **and separately pins the newer live guest32 source SHA**. These entries are not dropped or converted into fabricated old passing drafts, and the earlier 209-case and three preexisting historical exception checks remain intact.

## Explicit limits

`CPP_DRAFT`, `ABI_UNVERIFIED`, `CROSS_FUNCTION_UNVERIFIED`, `NOT_NATIVE_LINKED`, `NOT_BEHAVIOR_TESTED`. None of the ten host signatures is a recovered Xbox compiler calling convention; complete live-in/live-out registers, EFLAGS, native 32-bit stack layouts, virtual memory translation, full callee/caller connections, fault behavior and a playable 1:1 PC port remain unverified. Matching isolated source traces and original instruction hashes is a necessary but not sufficient step toward 1:1 behavioral equivalence. C++17 syntax coverage is tracked independently of genuine game completion.
