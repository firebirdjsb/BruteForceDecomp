/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6E921F344C25386C9AA433BD0FD44545DA022BFC97DAE494F9BA81211D8A1117
 * Entry: 0x003195d7, Ghidra index: 12227, label: CMcpxBuffer_Play
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int DSOUND__CMcpxBuffer_Play(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  if ((*(uint *)(in_ECX[0x22] + 8) & 0x182000) != 0) {
    param_1 = 1;
  }
  iVar1 = FUN_00319589();
  if (-1 < iVar1) {
    if (((param_1 & 4) != 0) && ((*(byte *)((int)in_ECX + 0x12) & 0x42) == 0)) {
      iVar1 = FUN_00317e87(0x40);
    }
    if (-1 < iVar1) {
      if ((*(byte *)(in_ECX[0x22] + 9) & 0x20) == 0) {
        if (((param_1 & 2) == 0) && ((*(ushort *)((int)in_ECX + 0x12) & 0x446) == 0)) {
          iVar2 = in_ECX[0x54];
        }
        else {
          iVar2 = 0;
        }
        in_ECX[0x54] = 0;
        if (iVar2 == 0) {
          FUN_00318e5b(param_1);
        }
        else {
          FUN_00318f9c(iVar2,param_1);
        }
        if (*(int *)(in_ECX[0x22] + 0xd8) != 0) {
          (**(code **)(*in_ECX + 0x18))(2,0,0,0);
        }
      }
      else {
        FUN_00318bb6();
      }
    }
  }
  return iVar1;
}
