/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3D5C3543E1DC16D360C7156C0B676A04378C5871C1D303A6635DAA143DEA8944
 * Entry: 0x00123ea0, Ghidra index: 3676, label: FUN_00123ea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE 0x00123f17: fcomp m32fp [0x003c05fc], a four-byte float.
 * Original file bits 0x40800000 (4.0f); symbol linkage remains ABI_UNVERIFIED. */
extern float DAT_003c05fc;
void FUN_00123ea0(void)

{
  int iVar1;
  int in_EAX;
  
  if (0.0 < *(float *)(in_EAX + 0x7dc)) {
    FUN_00123f60();
    return;
  }
  iVar1 = *(int *)(in_EAX + 0x1fc);
  if (((iVar1 == 0) || ((*(byte *)(iVar1 + 0x250) & 0x40) == 0)) &&
     ((*(int *)(in_EAX + 0x214) == 0 || ((*(byte *)(*(int *)(in_EAX + 0x214) + 0x3d) & 1) == 0)))) {
    FUN_00123f60();
    FUN_00126320();
  }
  else {
    *(undefined4 *)(in_EAX + 0x7dc) = 0;
    if (*(int *)(iVar1 + 0x260) != 0) {
      FUN_0012eab0(1);
      FUN_00123f60();
      FUN_00126320();
      if (DAT_003c05fc < *(float *)(in_EAX + 0x7dc)) {
        *(undefined4 *)(in_EAX + 0x208) = 0x3dcccccd;
        *(float *)(in_EAX + 0x7dc) = *(float *)(in_EAX + 0x7dc) + 0.15;
        return;
      }
    }
  }
  return;
}
