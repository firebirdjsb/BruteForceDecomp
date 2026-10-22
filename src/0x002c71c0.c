/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 772E8C42851C6F682AA769A854D0E81244129355FEB2A9BB4B886E0B045DEBE2
 * Entry: 0x002c71c0, Ghidra index: 10095, label: FUN_002c71c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e698;
extern uint32_t PTR_FUN_003bc654;
void FUN_002c71c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_0038e698;
  if ((int *)in_ECX[2] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[2] + 4))(1);
  }
  in_ECX[2] = 0;
  if ((int *)in_ECX[3] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[3] + 4))(1);
  }
  in_ECX[3] = 0;
  if ((undefined4 *)in_ECX[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xb])(1);
  }
  in_ECX[0xb] = 0;
  if (*(short *)(in_ECX + 9) != 0) {
    if (in_ECX[8] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[8]);
      return;
    }
    *(undefined2 *)(in_ECX + 7) = 0;
    *(undefined2 *)(in_ECX + 9) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  if (*(short *)(in_ECX + 6) != 0) {
    if (in_ECX[5] != 0) {
      (*(code *)PTR_FUN_003bc654)(in_ECX[5]);
      return;
    }
    *(undefined2 *)(in_ECX + 4) = 0;
    *(undefined2 *)(in_ECX + 6) = 0;
  }
  *(undefined2 *)((int)in_ECX + 0x12) = 0;
  return;
}
