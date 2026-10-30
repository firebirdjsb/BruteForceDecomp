/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FACA600FF39F5D82257096773A1D68965F50A31F9827393F81491CA78B480F55
 * Entry: 0x00132a50, Ghidra index: 3859, label: FUN_00132a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image address 0x00307900; address-only label pending link definition. */
extern unsigned char LAB_00307900;

int FUN_00132a50(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307900;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x38) {
    if (param_3 != 0) {
      FUN_001327c0();
    }
    param_3 = param_3 + 0x38;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
