/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8E5EAA306EBC3D8A217195F32C75AC11A5B5B489F44A89549100D30C161B4FFC
 * Entry: 0x001eca30, Ghidra index: 6916, label: FUN_001eca30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
int FUN_001eca30(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 *unaff_ESI;
  
  iVar2 = DAT_004698d0;
  *unaff_ESI = 0xffffffff;
  if ((*(char *)(in_ECX + 0x5630) != '\0') && (iVar1 = *(int *)(in_ECX + 0x5634), iVar1 < iVar2)) {
    *unaff_ESI = 0;
    iVar2 = iVar1;
  }
  if ((*(char *)(in_ECX + 0x5648) != '\0') && (iVar1 = *(int *)(in_ECX + 0x564c), iVar1 < iVar2)) {
    *unaff_ESI = 1;
    iVar2 = iVar1;
  }
  if ((*(char *)(in_ECX + 0x5660) != '\0') && (iVar1 = *(int *)(in_ECX + 0x5664), iVar1 < iVar2)) {
    *unaff_ESI = 2;
    iVar2 = iVar1;
  }
  if ((*(char *)(in_ECX + 0x5678) != '\0') && (iVar1 = *(int *)(in_ECX + 0x567c), iVar1 < iVar2)) {
    *unaff_ESI = 3;
    iVar2 = iVar1;
  }
  return iVar2;
}
