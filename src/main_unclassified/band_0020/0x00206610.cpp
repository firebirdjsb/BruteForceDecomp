/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 223391398E181B0484E18104F63456E2EE464561B26B4F9C0A0858465D8CAC6D
 * Entry: 0x00206610, Ghidra index: 7300, label: FUN_00206610
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469940;
void FUN_00206610(void)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  piVar1 = DAT_00469940;
  *(byte *)(in_ECX + 0x3d) = *(byte *)(in_ECX + 0x3d) & 0xbe;
  cVar2 = (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x44));
  if (cVar2 != '\0') {
    *(byte *)(in_ECX + 0x8d) = *(byte *)(in_ECX + 0x8d) | 8;
    *(byte *)(in_ECX + 0x3d) = *(byte *)(in_ECX + 0x3d) | 0x40;
  }
  if ((*(byte *)(in_ECX + 0x8d) & 4) != 0) {
    FUN_002063c0(in_ECX,0);
  }
  return;
}
