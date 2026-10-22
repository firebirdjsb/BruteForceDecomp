/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E4698AD123BE070A7CE491B1E928011507B673367D32D6B131B69E52D766FBA
 * Entry: 0x002f7eae, Ghidra index: 10939, label: FUN_002f7eae
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b7860;
extern uint32_t DAT_003b7868;
extern uint32_t DAT_003b7870;
extern uint32_t DAT_003b7878;
void FUN_002f7eae(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_10 [12];
  
  FUN_002eaa86(local_10,"%08lx",param_1);
  iVar1 = XAPILIB__XapiMapLetterToDirectory(&DAT_003b7860,&DAT_003b7868,local_10,1,0,0);
  if (-1 < iVar1) {
    XAPILIB__XapiMapLetterToDirectory(&DAT_003b7870,&DAT_003b7878,local_10,1,param_2,0);
  }
  return;
}
