/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1485E2B2F9B0629D71247D627B36BDBC77D342B6FC2A5F279140CDC53A8A9A3F
 * Entry: 0x00115830, Ghidra index: 3579, label: FUN_00115830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00115830(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x6c);
  uVar2 = *(undefined4 *)(iVar1 + 0x40);
  uVar3 = *(undefined4 *)(iVar1 + 0x3c);
  *(undefined4 *)(in_EAX + 0x458) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(in_EAX + 0x45c) = uVar3;
  *(undefined4 *)(in_EAX + 0x460) = uVar2;
  *(undefined4 *)(in_EAX + 0x464) = *(undefined4 *)(in_EAX + 0x458);
  *(undefined4 *)(in_EAX + 0x46c) = uVar2;
  *(undefined4 *)(in_EAX + 0x468) = *(undefined4 *)(in_EAX + 0x438);
  *(undefined4 *)(in_EAX + 0x6e8) = *(undefined4 *)(in_EAX + 0x45c);
  *(byte *)(in_EAX + 0x261) = *(byte *)(in_EAX + 0x261) & 0x3f;
  *(undefined4 *)(in_EAX + 0x6f4) = 0;
  *(undefined4 *)(in_EAX + 0x6f0) = 0;
  *(undefined4 *)(in_EAX + 0x6ec) = 0;
  *(undefined4 *)(in_EAX + 0x700) = 0;
  *(undefined4 *)(in_EAX + 0x6fc) = 0;
  *(undefined4 *)(in_EAX + 0x6f8) = 0;
  *(undefined4 *)(in_EAX + 0x718) = 0;
  *(undefined4 *)(in_EAX + 0x714) = 0;
  *(undefined4 *)(in_EAX + 0x710) = 0;
  return;
}
