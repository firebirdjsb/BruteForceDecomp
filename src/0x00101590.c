/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EA23BACFBB5AE8E4B035DDC401867195202F6A2296455A23BCDAAC82584A31F8
 * Entry: 0x00101590, Ghidra index: 3241, label: FUN_00101590
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00101590(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  float *unaff_ESI;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_001013d0(&local_10);
  piVar4 = &local_10;
  piVar2 = &local_c;
  if (local_c < 0x25) {
    piVar2 = &param_1;
  }
  local_c = *piVar2;
  piVar3 = &local_4;
  if (0x1bb < local_4) {
    piVar3 = &param_1;
  }
  local_4 = *piVar3;
  if (local_10 < 0x31) {
    piVar4 = &param_1;
  }
  local_10 = *piVar4;
  piVar4 = &local_8;
  if (0x24f < local_8) {
    piVar4 = &param_1;
  }
  iVar1 = *piVar4;
  unaff_ESI[1] = (float)(*piVar3 - *piVar2);
  *unaff_ESI = (float)(iVar1 - local_10);
  return;
}
