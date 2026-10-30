/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B9AC1CDA2095A62746217415340674D681A9413F12924523E3DE34ACAC9767CA
 * Entry: 0x000c4bc0, Ghidra index: 2413, label: FUN_000c4bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t switchD_000c4c05_default[];
void FUN_000c4bc0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint32_t packed_color_word;
  int in_EDX;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  
  iVar1 = param_1;
  iVar6 = *(int *)(in_EDX + 0x28);
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar6 + -0x2c;
  }
  iVar3 = 6;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -0x2c;
  }
  if ((*(byte *)(*(int *)(iVar6 + 100) + 0x74) & 1) != 0) {
    iVar3 = 4;
  }
  iVar6 = 0;
  iVar7 = 0x10;
  switch(*(undefined4 *)(iVar2 + 0x68)) {
  case 1:
    iVar3 = -iVar3;
  case 3:
    iVar7 = 0;
    iVar6 = iVar3;
    goto switchD_000c4c05_default;
  case 2:
    break;
  case 4:
    iVar3 = -iVar3;
    break;
  default:
    goto switchD_000c4c05_default;
  }
  iVar6 = 0;
  iVar7 = iVar3;
switchD_000c4c05_default:
  uVar8 = FUN_000c4cd0(in_EDX,param_1);
  piVar5 = (int *)((ulonglong)uVar8 >> 0x20);
  uVar4 = (int)uVar8 >> 2;
  /* 0x000C4C3E and 0x000C4C42 set bytes 1 and 2 to CL=(EAX>>2).
   * 0x000C4C5A sets byte 0 to AL (the original EAX return word).
   * 0x000C4C93 sets byte 3 to 0xFF. The indirect call receives
   * the address of these four contiguous guest bytes.
   * Caller EDX/EAX 64-bit return modeling and indirect target
   * remain ABI_UNVERIFIED; this restores only the observed byte pack. */
  packed_color_word = UINT32_C(0xff000000) |
      ((uVar4 & UINT32_C(0xff)) << 16) |
      ((uVar4 & UINT32_C(0xff)) << 8) |
      ((uint32_t)uVar8 & UINT32_C(0xff));
  (**(code **)(*piVar5 + 4))
            (&packed_color_word,(float)(int)*(short *)((int)piVar5 + 0xe),(float)(int)(short)piVar5[3],
             (float)((2 - iVar1) * iVar7),(float)((2 - iVar1) * iVar6),(int)uVar8,1,1,piVar5[8],0,0,
             0,0,0x3f800000,0x3f800000,0,0,0);
  return;
}
