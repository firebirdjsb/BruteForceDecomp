/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2B3C421120963E09540BF6506B0BEDAD75BC9F76A3770B0C7C7A112408BAC72
 * Entry: 0x0034568e, Ghidra index: 12814, label: ioctlsocket
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 XONLINES__ioctlsocket(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((in_ECX == 0) || (*(short *)(in_ECX + 0xbd2) == 0)) {
    XAPILIB__SetLastError(0x276d);
  }
  else {
    iVar2 = FUN_003454a2(param_1);
    if (iVar2 != 0) {
      if (param_2 == -0x7ffb9982) {
        FUN_00345541(0xfffbffff,-(uint)(*param_3 != 0) & 0x40000);
      }
      else if (param_2 == 0x4004667f) {
        KeRaiseIrqlToDpcLevel();
        if ((*(byte *)(iVar2 + 0xc) & 2) == 0) {
          piVar1 = *(int **)(iVar2 + 0x24);
          if (piVar1 == (int *)(iVar2 + 0x24)) {
            iVar3 = 0;
          }
          else {
            iVar3 = piVar1[2];
            if (iVar3 == 0) {
              iVar3 = 1;
            }
          }
        }
        else {
          iVar3 = *(int *)(iVar2 + 0x2c);
        }
        *param_3 = iVar3;
        KfLowerIrql();
      }
      else {
        iVar4 = 0x273a;
      }
      *(undefined4 *)(iVar2 + 8) = 0x2b434f53;
      if (iVar4 == 0) {
        return 0;
      }
      XAPILIB__SetLastError(iVar4);
    }
  }
  return 0xffffffff;
}
