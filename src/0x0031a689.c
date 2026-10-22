/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DB8931BACBB7A2D027989D9A6A6B775A028C93C67DB6B011A66935448214CDBB
 * Entry: 0x0031a689, Ghidra index: 12261, label: FUN_0031a689
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0031a689(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_8 [4];
  
  piVar2 = param_1;
  if (param_1[6] != 0) {
    if ((*(byte *)(param_1 + 4) & 2) != 0) {
      XAPILIB__CancelIo(param_1[3]);
    }
    RtlEnterCriticalSection(param_1 + 9);
    piVar1 = param_1 + 7;
    param_1 = (int *)0x0;
    if (*piVar1 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(piVar2[0x10] + iVar3 + 0x2c) == -0x7ffffff6) {
          XAPILIB__GetOverlappedResult(piVar2[3],piVar2[0x10] + iVar3,local_8,1);
        }
        *(undefined4 *)(piVar2[0x10] + 0x2c + iVar3) = 0;
        XAPILIB__SetEvent(*(undefined4 *)(piVar2[0x10] + 0x10 + iVar3));
        FUN_00316674(piVar2[0x10] + 0x14 + iVar3,0,0,0,0x80004004);
        param_1 = (int *)((int)param_1 + 1);
        iVar3 = iVar3 + 0x30;
      } while (param_1 < (uint)piVar2[7]);
    }
    RtlLeaveCriticalSection(piVar2 + 9);
  }
  (**(code **)(*piVar2 + 0x1c))(piVar2,0,0,0);
  return 0;
}
