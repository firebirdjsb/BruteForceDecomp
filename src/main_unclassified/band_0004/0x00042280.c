/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F112E2687CFF53F99E61CD4C14802A34301B011894B8A6755B3591F8088B4744
 * Entry: 0x00042280, Ghidra index: 503, label: FUN_00042280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00042444) */

bool FUN_00042280(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int returned_object; /* EAX result of FUN_001611d0 */
  bool bVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  byte local_2c;
  undefined1 local_28 [40];
  
  bVar5 = true;
  iVar3 = FUN_000120f0();
  iVar1 = *(int *)(*(int *)(param_1 + 0x938) + -4);
  iVar4 = *(int *)(*(int *)(param_1 + 0x934) + 0x14 + *(int *)(param_1 + 0x940) * 0x18);
  *(uint *)(iVar3 + 0x250) = *(uint *)(iVar3 + 0x250) | 1;
  iVar3 = *(int *)(iVar3 + 0x24c);
  if ((iVar4 != 0) && (iVar1 != 0)) {
    if (iVar4 == iVar1) {
      *(undefined1 *)(param_1 + 0x950) = 1;
    }
    else if ((*(byte *)(iVar4 + 0x28) & 4) != 0) {
      FUN_0001b650();
      returned_object = FUN_001611d0();
      *(uint *)(returned_object + 0x28) = *(uint *)(returned_object + 0x28) & 0xfffffffb;
      if ((*(byte *)(iVar3 + 0x28) & 4) != 0) {
        returned_object = FUN_001611d0();
        *(uint *)(returned_object + 0x28) = *(uint *)(returned_object + 0x28) & 0xfffffffb;
      }
      iVar4 = FUN_00023420();
      if (iVar4 == iVar1) {
        *(undefined1 *)(param_1 + 0x950) = 1;
      }
      else if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x28) & 4) != 0)) {
        returned_object = FUN_001611d0();
        *(uint *)(returned_object + 0x28) = *(uint *)(returned_object + 0x28) & 0xfffffffb;
        FUN_000125d0();
        local_2c = local_2c & 0xfc;
        local_34 = 0;
        local_38 = 0;
        local_3c = 0;
        local_30 = iVar1;
        cVar2 = FUN_00041660(&local_3c,local_28,0);
        bVar5 = cVar2 != '\0';
        if (bVar5) {
          FUN_00042460();
          FUN_00025730(param_1 + 0x930,1,1);
          **(undefined4 **)(param_1 + 0x1a8) = 1;
          FUN_000124f0(0x3f800000);
          *(undefined4 *)(param_1 + 0x94c) = 0xc1a00000;
        }
        FUN_0001bc90();
      }
    }
  }
  FUN_00042240();
  return bVar5;
}
