# 0x002eca8b native FRNDINT operation

This is a bounded host operation, not a recovered Xbox ABI, original-hardware execution, whole-game equivalence or byte-identical rebuild.

## Evidence and corrected operation

The immutable private Ghidra export covers all 19 bytes / 9 instructions at original entry 0x002eca8b, matching body SHA-256 `B2ACFB60D9432E4AD64781AC801918ADA55D9C22650B1504C4EE039ED85DA31F`, without uncovered bytes, listing overrides or raw decode disagreements. Original FileBytes are absent, so this is function-body authentication, not reauthentication of the whole XBE. No original machine code or uploaded scripts were executed.

After two PUSH ECX instructions, FLD qword [ESP+0xc] reads the binary64 argument at entry ESP+4. FRNDINT uses the existing x87 rounding direction. FSTP qword [ESP] rounds/stores to binary64 scratch, then FLD qword [ESP] reloads it into ST0. Both scratch steps are preserved. POP ECX twice leaves ECX containing the scratch high dword, and RET leaves stack-argument cleanup to the caller. That guest ECX/stack transport is documented, not implemented by this host helper.

The old canonical source uses unresolved ROUND. Merely using C++ round would impose ties-away-from-zero semantics and ignore the required x87 controls/status. Native FRNDINT, the explicit binary64 scratch boundary and native ST0 return are required.

## Host and stack contract

- GNU/Clang x86-64 Linux default SysV, native binary80 long double, IEEE binary64 double. Compile-time guards reject unsupported types/architectures and fast math.
- One live readable alignof(double)-aligned binary64 object. Raw special values are placed using memcpy, without host FP arithmetic or conversion.
- All x87 exceptions masked; PC encoding must be valid 00, 10 or 11 (24/53/64-bit). Reserved PC01 is not covered. The specific next physical push destination `(TOP - 1) modulo 8` must be empty; all seven preceding logical entries may be live. Peak and returned occupancy are one extra entry.
- Canonical source signature remains float10 FUN_002eca8b(double). Native argument XMM0 transport and native ST0 return are tested, but this is not an Xbox stack/register adapter.
- Integer EFLAGS, guest registers/stack, FIP/FDP/FOP, unmasked traps, faults, MMIO, concurrent observers and complete CPU-context equivalence are excluded.

## Native return boundary and discovered compiler issue

A simple static-inline helper was insufficient. Clang19 -O0 generated a helper call followed by FLD ST0/FSTP ST0. That duplicate needs a second empty slot and can overflow when seven old entries are live, despite the original operation needing only one.

The helper is therefore always_inline. Actual canonical -O0 codegen contains the original operation plus only FSTPT/FLDT binary80 copies; -O2 contains exactly the four original FP instructions. The gate rejects external/helper calls, FLD ST0 duplicates and any non-original FP instruction except a paired binary80 spill/reload. Removing always_inline is a behavioral and codegen negative control.

These native80 copies are justified, not assumed harmless. Finite binary64 values of magnitude below 2^52 round to integers of magnitude at most 2^52, exactly representable in binary64; larger finite binary64 values are already integral. The original sequence therefore returns zero, normal binary80, infinity or quiet NaN, never binary80 subnormal or signaling NaN. Copying to and from native80 does not narrow or add conversion exceptions. Final FLD clears C1 in both original and compiled paths. Other undefined condition behavior is compared on the tested host, not asserted universally or for original Pentium-III hardware.

The authored capture bridge loads the raw argument with MOVSD, calls the full canonical compiled wrapper directly, and immediately FXSAVEs returned ST0. It restores the caller's saved FP state before returning void, including active x87 entries and callee-saved CW/MXCSR controls. RBX and normal SysV CALL alignment are preserved. No extra C++ result-consuming wrapper may be inserted.

## Validation

Clang19 C++17 -O0/-O2 and GCC14 C++17 -O2 ASan+UBSan each pass 120,324,096 authored-instruction-oracle comparisons. The matrix contains 102 raw binary64 inputs, all three valid x87 PC modes, four RC modes, 16 MXCSR control combinations, all eight TOPs, all 128 sparse tag patterns in seven preceding positions, and six sticky/status seeds. Independent exact anchors include signed zeros, infinities, maximal finite binary64 and directed/tie-even rounding of +/-1.5. Guard-page span and sentinels protect the exact eight-byte readable input contract.

A separate independent integer-only model passes 4,276,224 cases / 174 input words per Clang19 -O0/-O2 build. It decodes binary64, applies rounding and encodes binary80 without using x87 arithmetic as its reference. It checks signed zero, NaN quieting/payload/sign, IE/DE/PE/SF, C1/TOP/tags, all old live80 values and CW/MXCSR, including +/-0.5, 2^52-0.5 and PC24 2^24+1. The reviewer additionally ran GCC14 -O2 ASan+UBSan successfully.

The hardware oracle compares complete x87 CW/SW, abridged tags, all active80 values and MXCSR. FIP/FDP/FOP, empty-register payloads, slot padding, XMM transport, MXCSR_MASK and reserved fields are excluded. Sanitizers cover compiler-visible accesses; inline-asm memory has additional guard-page/sentinel checks. LeakSanitizer is disabled and untested.

Public tests pin exact source reversal, historical fixture SHA/Git blob, wrapper/helper/oracle/model artifacts and narrow opcode windows. Private optional full-body validation checks all 19 original bytes but is not required by CI. Negative controls remove FRNDINT, skip binary64 scratch, narrow the return, remove always_inline, corrupt opcode/source evidence and lose caller-state restoration. No private original body record or whole dump belongs in Git.
