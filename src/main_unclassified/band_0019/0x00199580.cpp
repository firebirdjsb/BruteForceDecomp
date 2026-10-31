/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D963E483A9372593CBB4AA87D76FA45F72ED7D23AC30E0ED5E8F4278F07889FD
 * Entry: 0x00199580, Ghidra index: 5313, label: FUN_00199580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_001a9ae0(byte param_1);
undefined4 FUN_00199580(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_001a9ae0(1);
  }
  return 0;
}
