# 2026-10-31: source-only DirectSound C++17 caller repairs

## Scope and exact-tree baseline

- Latest completed exact-tree audit before repair: 4916e806e243bf39229f7edfab702b0727d216a2, run 41189904413: 3,357/13,694 passing strict Clang++17, 10,337 failing. Progress-only descendant: 5e6cf0e6600a064d10d0550edd3fb2dbbe502584.
- Three original-address callers (0x00314C9D, 0x00314CD4, 0x00314D1B) each had exactly one recorded compiler error: missing FUN_00319a67.
- The original retail XBE bytes were NOT available in this run. Required retail XBE SHA-256 B6EA5D4DD6500AE86C3F5E3E4618BC9B1E3FACDDCB483170DFEE7A787087C721 is a reference identity, not reauthenticated here.
- Callee draft 0x00319A67 defines int FUN_00319a67(float param_1) and retains original x86 body SHA-256 label AE4A39F1F86EA5A10DC0F01AD19C2EDE2C9DDF1AED58B048C690BC9F8FDEBF83. This is a Ghidra draft signature, NOT an Xbox-verified ABI.

## Conservative source-only changes

| Caller | Original x86 body SHA-256 label | Pre-change source SHA-256 |
| --- | --- | --- |
| 0x00314C9D | FF0389864BC3ECA37FFB2CF6412894C11A4A3C3A4CE16D22ED8FE70D7D7EE1E2 | 87c3e8a49c841770ab383be21d4b1a570f0060795b6d38df749e54f4dc57cd64 |
| 0x00314CD4 | 27722B8900610938CD51B23B1C10FC2E16CE8EE6B817D1915AA34C85BEF691E7 | 85ca2ed42f3b56aa895328b3e5c1808d0a1dae8d46ff4e27433a5ec22d882f0d |
| 0x00314D1B | F904FD1D75BB1FB3D3FF987B7BAC815B447FFE549964346F0F9E5AD484F6B3A6 | 685b2b49f01c9ffa622717bfcc82bf222234bb9b89a7aedba168b164e039d813 |

Each caller receives only a file-scope declaration copied from the existing callee draft and an explicit ABI_UNVERIFIED warning. No source function body, entry address, original body-hash label, or floating-point expression is changed.

Preflight: all three original files failed isolated strict Clang++17 due to missing declaration. After adding the declaration, all three pass at -O0 and -O2 (six syntax checks). Missing-declaration and wrong-arity negative controls fail as intended. The new CI test restores the pre-change source and verifies SHA-256 byte-for-byte. This is source-only C++17 syntax evidence, not a claim of x87 behavior or original Xbox ABI. A completed exact-tree audit is required before reporting any syntax net delta or updating README progress.

## Quarantined evidence-needed families

The following inspected families were not modified because a source-matched declaration would be incorrect or insufficient:

- 0x00273D50: callee draft declares ten parameters; eight inspected callers invoke it with zero explicit arguments after copying ten guest-stack words.
- 0x00294B10: eight inspected callers supply character-array pointers to a callee draft parameter typed int. Do not truncate native pointers or invent a new signature.
- 0x0001FE40: three inspected callers pass guest code addresses as integer words, while the callee draft declares native code *. No host callback mapping is established.
- 0x00330C3E: inspected callers mix zero arguments and integer guest addresses, while callee draft expects undefined4 *.
- 0x000E0350: inspected callers include four-byte byte arrays and a one-byte local for a callee draft with a four-byte output pointer; original stack and output writes need renewed XBE review.
- 0x000CCAE0: callers mix guest integers, float pointers, ushort pointers and float-bit-pattern constants.
- 0x00131E20: inspected callers pass fourteen explicit words while the callee draft declares zero parameters.

The three repaired scalar callers still need original x87 rounding/conversion verification, direct CALL/RET and register-producer checks, guest ABI reconstruction and linked behavior tests. Class layout, vtables, indirect dispatch, native guest32 memory translation, cross-function linkage and 1:1 gameplay remain unverified.
