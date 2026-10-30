/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E8ACB3CEF8ED988BF2E7B14F129DB0B646130F9B2CFCA5A64D68DDF4E2E75952
 * Entry: 0x00255b70, Ghidra index: 8427, label: FUN_00255b70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003938d0;
extern uint32_t PTR_LAB_003938e4;
void FUN_00255b70(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *in_EAX;
  int unaff_ESI;
  
  *in_EAX = PTR_LAB_003938d0;
  puVar1 = in_EAX + 2;
  *puVar1 = PTR_LAB_003938e4;
  in_EAX[3] = 1;
  in_EAX[4] = *in_EAX;
  iVar2 = *(int *)(unaff_ESI + 8);
  in_EAX[1] = iVar2;
  if (iVar2 == 0) {
    in_EAX[1] = *puVar1;
    return;
  }
  **(int **)(unaff_ESI + 0xc) = (int)puVar1;
  return;
}
