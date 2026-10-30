/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4578A9AE19B9AA94B8EA18175D1B44DE55B893220DF390BEC5A4F99AE96AAD2B
 * Entry: 0x00145e30, Ghidra index: 4204, label: FUN_00145e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-matched declaration of FUN_00050b40; callback ABI and behavior remain
 * ABI_UNVERIFIED. This only resolves name lookup in the C11 draft. */
extern void FUN_00050b40(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c08c;
extern uint32_t PTR_LAB_0039b7e8;
void FUN_00145e30(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x70];
  *in_ECX = PTR_FUN_0039c08c;
  in_ECX[6] = PTR_LAB_0039b7e8;
  if (iVar1 != 0) {
    FUN_0001fe00(iVar1,4,*(undefined4 *)(iVar1 + -4),FUN_00050b40);
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(iVar1 + -4);
  }
  FUN_00145d10();
  FUN_00154e50();
  return;
}
