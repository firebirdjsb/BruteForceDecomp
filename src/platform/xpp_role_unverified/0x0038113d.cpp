/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F6C2E09EECCB6E7CE2C737D5B11310C2DE3FBB87E5E706E34EC5CD2D4D9C9AC0
 * Entry: 0x0038113d, Ghidra index: 13556, label: FUN_0038113d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0038113d(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  char *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  if (*in_ECX == '\x05') {
    iVar4 = FUN_00380f6c();
    if (*(int *)(iVar4 + 8) != 0) {
      *(int *)(in_ECX + 8) = *(int *)(iVar4 + 8);
      *(undefined4 *)(param_1 + 4) = 0;
      FUN_00380eda(param_1);
      return 0;
    }
  }
  cVar1 = in_ECX[5];
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(char *)(param_1 + 0x14) = cVar1;
  *(ushort *)(param_1 + 0x1c) = (ushort)(byte)in_ECX[6];
  bVar2 = in_ECX[4];
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(byte *)(param_1 + 0x1e) = bVar2 >> 7;
  *(undefined1 *)(param_1 + 1) = 2;
  iVar3 = FUN_00383a75(*(int *)(in_ECX + 0xc) + 0x18,param_1);
  if ((-1 < iVar3) && (*(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 0x10), iVar4 != 0)) {
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return iVar3;
}
