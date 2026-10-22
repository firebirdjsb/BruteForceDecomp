/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 28DA4B7169E0191FB2B51B8DDAF087ABA42C767821546309D488278B947E1E08
 * Entry: 0x00294440, Ghidra index: 9287, label: FUN_00294440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b9630;
extern uint32_t DAT_003b9634;
extern uint32_t DAT_003b9768;
extern char s_tableEM_00404610[];
undefined4 FUN_00294440(void)

{
  int iVar1;
  int *in_ECX;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *in_ECX;
  iVar4 = 0;
  if (0 < iVar3) {
    puVar2 = (undefined4 *)in_ECX[2];
    do {
      if (((undefined *)*puVar2 != (undefined *)0x0) && ((undefined *)*puVar2 != &DAT_003b9768)) {
        iVar4 = iVar4 + 1;
      }
      puVar2 = puVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (DAT_003b9630 < 0x7ffffffd) {
    iVar1 = DAT_003b9630;
    do {
      if (iVar4 * 2 + 2 < iVar1) {
        return (&DAT_003b9630)[iVar3];
      }
      iVar1 = (&DAT_003b9634)[iVar3];
      iVar3 = iVar3 + 1;
    } while (iVar1 < 0x7ffffffd);
  }
  FUN_0028ab50(s_tableEM_00404610);
  return 0;
}
