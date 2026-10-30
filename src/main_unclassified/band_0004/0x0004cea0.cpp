/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC528800886E4B2ACDB90E9DF0877F82F307620E5946E707FF01214C2B4D04A4
 * Entry: 0x0004cea0, Ghidra index: 644, label: FUN_0004cea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00232180(int param_1);
extern uint FUN_00022bc0(int *param_1);

void FUN_0004cea0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 *in_EAX;
  int iVar4;
  int *in_ECX;
  undefined1 local_10 [16];
  
  if (*(int *)(in_ECX[3] + 4) == 3) {
    iVar4 = in_ECX[0xfa];
    if ((iVar4 != 0) && (iVar4 != -1)) {
      uVar1 = *(undefined4 *)(iVar4 + 0x40);
      uVar2 = *(undefined4 *)(iVar4 + 0x3c);
      *in_EAX = *(undefined4 *)(iVar4 + 0x38);
      in_EAX[1] = uVar2;
      in_EAX[2] = uVar1;
      return;
    }
    iVar4 = (**(code **)(*in_ECX + 0x40))();
    uVar1 = *(undefined4 *)(iVar4 + 0x2c);
    uVar2 = *(undefined4 *)(iVar4 + 0x28);
    *in_EAX = *(undefined4 *)(iVar4 + 0x24);
    in_EAX[1] = uVar2;
    in_EAX[2] = uVar1;
    return;
  }
  if (*(int *)(in_ECX[3] + 4) == 0x1d) {
    FUN_00232180(0);
    return;
  }
  iVar4 = *(int *)(in_ECX[0x1b] + 0x4c);
  if ((iVar4 != 0) && (0 < *(int *)(in_ECX[0x1b] + 0x50) - iVar4 >> 2)) {
    iVar4 = (**(code **)(*in_ECX + 0x40))();
    uVar1 = *(undefined4 *)(iVar4 + 0x2c);
    uVar2 = *(undefined4 *)(iVar4 + 0x24);
    in_EAX[1] = *(undefined4 *)(iVar4 + 0x28);
    in_EAX[1] = (float)in_EAX[1] + 0.05;
    *in_EAX = uVar2;
    in_EAX[2] = uVar1;
    return;
  }
  cVar3 = FUN_00022bc0(local_10);
  if (cVar3 == '\0') {
    iVar4 = (**(code **)(*in_ECX + 0x40))();
    uVar1 = *(undefined4 *)(iVar4 + 0x2c);
    uVar2 = *(undefined4 *)(iVar4 + 0x24);
    in_EAX[1] = *(undefined4 *)(iVar4 + 0x28);
    *in_EAX = uVar2;
    in_EAX[2] = uVar1;
  }
  return;
}
