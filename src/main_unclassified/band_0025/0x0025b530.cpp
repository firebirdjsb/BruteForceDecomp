/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9F312AF6C03881A89790DF44BD7639E1CB06B6EC9CFB5666FD01A24BB0F6CA2C
 * Entry: 0x0025b530, Ghidra index: 8541, label: FUN_0025b530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443300;
extern uint32_t PTR_FUN_00393370;
extern uint32_t PTR_FUN_003933d8;
extern uint32_t PTR_FUN_00393438;
extern uint32_t PTR_LAB_003932a8;
extern uint32_t PTR_LAB_00393308;
extern uint32_t PTR_LAB_003933cc;
void FUN_0025b530(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  unaff_ESI[1] = PTR_FUN_00393370;
  *unaff_ESI = PTR_FUN_00393438;
  unaff_ESI[1] = PTR_FUN_003933d8;
  unaff_ESI[2] = 0;
  (**(code **)(*DAT_00443300 + 0x30))();
  *unaff_ESI = PTR_LAB_00393308;
  unaff_ESI[1] = PTR_LAB_003932a8;
  puVar1 = unaff_ESI + 0xc;
  *puVar1 = PTR_LAB_003933cc;
  unaff_ESI[0xd] = 1;
  unaff_ESI[0xe] = *unaff_ESI;
  iVar2 = *(int *)(unaff_EDI + 8);
  unaff_ESI[0xb] = iVar2;
  if (iVar2 == 0) {
    unaff_ESI[0xb] = *puVar1;
    return;
  }
  **(int **)(unaff_EDI + 0xc) = (int)puVar1;
  return;
}
