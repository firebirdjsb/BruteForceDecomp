/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 282A0BE18AACB93852EC6EB45A0CED47D850115D1E306B4D144389E9EB7693CC
 * Entry: 0x0025b390, Ghidra index: 8538, label: FUN_0025b390
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00080005;
uint FUN_0025b390(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int unaff_EDI;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar1 = in_EAX & 0xffffff00;
  if (*(int *)(unaff_EDI + 0xc) != 0) {
    D3D8LTCG__D3D_BlockOnResource_0();
    FUN_00373f00(unaff_EDI + 0x14,0,0,&local_10,&local_14,local_4,local_8,local_c);
    iVar2 = FUN_00359280(*(int *)(unaff_EDI + 0xc),local_10,local_14,
                         *(undefined4 *)(*(int *)(unaff_EDI + 0xc) + 4),0,0,&DAT_00080005);
    uVar1 = CONCAT31((int3)((uint)-iVar2 >> 8),'\x01' - (iVar2 != 0));
  }
  return uVar1;
}
