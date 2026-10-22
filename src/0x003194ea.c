/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5084EF98B9057E68B79A0307CBF4718D18AAD43FDF905203CB2B405CB7EEA819
 * Entry: 0x003194ea, Ghidra index: 12225, label: FUN_003194ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003194ea(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  int *local_8;
  
  iVar1 = in_ECX[0x22];
  if (*(int *)(iVar1 + 0xd8) == 0) {
    return;
  }
  if ((*(byte *)((int)in_ECX + 0x17) & 2) == 0) {
    piVar4 = *(int **)(iVar1 + 0xc4);
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar1 + 200);
    piVar4 = (int *)(*(int *)(iVar1 + 0xcc) + iVar3);
  }
  local_8 = in_ECX;
  DSOUND__CMcpxBuffer_GetCurrentPosition(&local_8,0);
  piVar2 = (int *)in_ECX[0x55];
  if ((local_8 <= piVar2) && (piVar2 <= piVar4)) {
    if (piVar2 <= local_8) goto LAB_0031956c;
    FUN_003192f0(piVar4,1);
    in_ECX[0x56] = 0;
    FUN_003192f0(iVar3,0);
  }
  FUN_003192f0(local_8,1);
LAB_0031956c:
  if ((*(ushort *)((int)in_ECX + 0x12) & 0x8002) == 0) {
    (**(code **)(*in_ECX + 0x1c))(2);
    FUN_00319351();
  }
  return;
}
