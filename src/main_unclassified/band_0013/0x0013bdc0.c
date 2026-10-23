/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 131E5EDF7DC1FC54D96ABB51FBD0ECFD13E3C0265C4B16FE33D08E4E0BDAAC78
 * Entry: 0x0013bdc0, Ghidra index: 3997, label: FUN_0013bdc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003ffd80;
undefined1 FUN_0013bdc0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_EAX + 0x18);
  iVar1 = (**(code **)(*(int *)(in_ECX + 0x1b4) + 0x9c))();
  iVar2 = (**(code **)(*(int *)(iVar2 + 0x1b4) + 0x9c))();
  if ((iVar2 != -1) && (iVar1 != -1)) {
    return (&DAT_003ffd80)[iVar2 * 10 + iVar1];
  }
  return 0;
}
