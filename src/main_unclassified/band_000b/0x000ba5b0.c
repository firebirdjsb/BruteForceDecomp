/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 49DFC7100C4AAE75927D2E95E200987ABA0AC6D5965F7EAFCA668A5257D51FA6
 * Entry: 0x000ba5b0, Ghidra index: 2262, label: FUN_000ba5b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f8bc;
undefined4 * FUN_000ba5b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_0039f8bc;
  param_1[8] = 0;
  param_1[9] = 0;
  *(byte *)((int)param_1 + 0x13) = *(byte *)((int)param_1 + 0x13) & 0xfe;
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[8] = 0;
  }
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[6] = 0x3f800000;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 4) = 0xff;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0xff;
  param_1[5] = 0;
  *(byte *)((int)param_1 + 0x13) = *(byte *)((int)param_1 + 0x13) & 0xf7;
  param_1[10] = 0;
  param_1[7] = 1;
  return param_1;
}
