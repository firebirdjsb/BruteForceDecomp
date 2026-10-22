/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3C6D4B4A74A76E7DF7A3720510D73DA3248280EF1FDE1077511842749189B063
 * Entry: 0x0031564e, Ghidra index: 12103, label: FUN_0031564e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f808;
void FUN_0031564e(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_003148cf(0x626f5344,8,1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  *(undefined4 **)(in_ECX + 0xc) = puVar1;
  *puVar1 = &DAT_0032f808;
  puVar1[1] = 0x5cc;
  iVar2 = FUN_003148cf(0x626f5344,0x28,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0031b0d2(1);
  }
  *(undefined4 *)(in_ECX + 8) = uVar3;
  FUN_0031b11a(0x204);
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_0031b21f(0,**(undefined4 **)(in_ECX + 0xc),(*(undefined4 **)(in_ECX + 0xc))[1]);
  }
  return;
}
