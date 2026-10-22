/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F07E8151EDEFFD8ECC34DD582C35F5510A2DB2D7AA392266C8A53FC2386BB100
 * Entry: 0x00163170, Ghidra index: 4665, label: FUN_00163170
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00163170(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int iVar2;
  
  *(int *)(in_ECX + 0xc) = in_EAX;
  FUN_00163210(in_EAX + 0x20,in_EAX + 0x1e8,((in_EAX + 0x1e8) - (in_EAX + 0x20)) / 0x18);
  iVar1 = *(int *)(in_ECX + 0xc) + 0x49c;
  iVar2 = *(int *)(in_ECX + 0xc) + 0x214;
  FUN_00163350(iVar2,iVar1,(iVar1 - iVar2) / 0x18,in_ECX);
  iVar1 = *(int *)(in_ECX + 0xc) + 0x520;
  iVar2 = *(int *)(in_ECX + 0xc) + 0x4a8;
  FUN_00163490(iVar2,iVar1,(iVar1 - iVar2) / 0x14,in_ECX);
  return;
}
