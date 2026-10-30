/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7BEA20431097541EB0A9D987C5601234FD034C460EF816FFC78E884716A2AAB1
 * Entry: 0x0014bb90, Ghidra index: 4323, label: FUN_0014bb90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b290;
extern uint32_t PTR_LAB_0039afd4;
void FUN_0014bb90(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  *in_ECX = PTR_FUN_0039b290;
  if (in_ECX[0x2e] != 0) {
    FUN_00149e10();
  }
  in_ECX[0x2e] = 0;
  FUN_0014bcd0();
  FUN_0008f720();
  if (in_ECX[0x2c] != 0) {
    FUN_0008f6e0();
  }
  iVar1 = 10;
  puVar2 = in_ECX + 0x2b;
  do {
    if (puVar2[-4] != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00237ec0(puVar2[-4]);
    }
    iVar1 = iVar1 + -1;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2 = puVar2 + -4;
  } while (iVar1 != 0);
  *in_ECX = &PTR_LAB_0039afd4;
  return;
}
