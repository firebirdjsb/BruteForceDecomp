# Formatter guest-stack contract (verified x86, not host ABI)

Original XBE SHA-256: `b6ea5d4dd6500ae86c3f5e3e4618bc9b1e3facddcb483170dfee7a787087c721`.

| Entry | Original x86 instruction | Guest stack slot | Meaning |
| --- | --- | --- | --- |
| `0x002EA9A9` | `0x002EA9C1: LEA EAX,[EBP+0x14]` | `EBP+0x14` | Address of first argument **after** the three fixed arguments, passed to `FUN_002ED38C` |
| `0x002EAA86` | `0x002EAA91: LEA EAX,[EBP+0x10]` | `EBP+0x10` | Address of first argument **after** the two fixed arguments, passed to `FUN_002EDBDE` |

The Ghidra symbols `stack0x00000010` and `stack0x0000000c` refer to guest stack-relative locations; they are **not** declarations of host C variables. Replacing either with `&param_3` or `&param_2` would point at the preceding fixed argument and be off by four bytes. Likewise, declaring a host `uint8_t *` from an arbitrary saved ESP does not prove that the Xbox varargs are contiguous in host memory.

## Required implementation boundary

Preserve the guest 32-bit varargs layout as an explicit representation, or establish a verified 32-bit calling-convention adapter that supplies a pointer to the first variadic argument. The C11 frontend can only consider these wrappers complete when callers and formatter consumers agree on the representation and argument widths. Do not silence the unresolved-stack diagnostics by substituting an arbitrary pointer.
