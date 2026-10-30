/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BC615A017E1EF112B713E40F60978DB1F493709AE676CC17568DF2A181A8D5A5
 * Entry: 0x00201710, Ghidra index: 7260, label: FUN_00201710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004071b4;
extern uint32_t *DAT_00443308;
extern char s_23_23_IMovieNamedTexture_0040621c[];
extern char s_someone_is_using_get_string_0040dbb4[];
undefined1 FUN_00201710(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  size_t __n;
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  char acStack_114 [4];
  int *piStack_110;
  undefined4 local_10c [66];
  
  uVar2 = 0;
  local_10c[0] = 0;
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  __n = FUN_002eaf70(0,&DAT_004071b4);
  if (__n == 0) goto LAB_0020180d;
  puVar3 = local_10c;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  _strncpy(acStack_114,(char *)0x0,__n);
  /* Original XBE 0x0020177D..0x0020179C:
   * FUN_002383B0 returns its 32-bit word in EAX, stored in
   * [ESP+0x10] after the first address PUSH. The interface slot
   * at [ESP+0x14] is independent. The vtable +0x28 call receives
   * receiver, address of returned word, address of interface slot.
   * 0x002017A3 reloads the interface pointer for vtable +0x50.
   * Xbox COM/vtable host ABI and guest pointer relocation TODO. */
  uint32_t guest_resource_word = FUN_002383b0();
  iVar1 = (**(code **)(*DAT_00443308 + 0x28))
                   (DAT_00443308,&guest_resource_word,&piStack_110);
  if (iVar1 < 0) goto LAB_0020180d;
  acStack_114[0] = -0x77;
  acStack_114[1] = -0x24;
  acStack_114[2] = -0x39;
  acStack_114[3] = -6;
  iVar1 = (**(code **)(*piStack_110 + 0x50))(piStack_110,acStack_114);
  if ((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 4), puVar3 == (undefined4 *)0x0)) {
LAB_002017d7:
    acStack_114[0] = '@';
    acStack_114[1] = -0x56;
    acStack_114[2] = '\x1b';
    acStack_114[3] = -0x20;
    iVar1 = (**(code **)(*piStack_110 + 0x50))(piStack_110,acStack_114);
    if ((iVar1 == 0) || (puVar3 = *(undefined4 **)(iVar1 + 4), puVar3 == (undefined4 *)0x0))
    goto LAB_0020180d;
    iVar1 = (**(code **)*puVar3)(puVar3,s_23_23_IMovieNamedTexture_0040621c,param_3);
    if (iVar1 < 0) goto LAB_0020180d;
  }
  else {
    iVar1 = (**(code **)*puVar3)(puVar3,s_23_23_IMovieNamedTexture_0040621c,param_3);
    if (iVar1 < 0) goto LAB_002017d7;
  }
  uVar2 = 1;
LAB_0020180d:
  if (piStack_110 != (int *)0x0) {
    (**(code **)(*piStack_110 + 8))(piStack_110);
  }
  return uVar2;
}
