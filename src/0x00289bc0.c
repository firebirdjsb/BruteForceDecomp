/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52F42C95BBD719DAFF51D4755A34FC5154D688648A345E9977BEA17981529F4D
 * Entry: 0x00289bc0, Ghidra index: 9144, label: FUN_00289bc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469888;
void FUN_00289bc0(char *param_1)

{
  char cVar1;
  uint *puVar2;
  
  puVar2 = DAT_00469888;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    FUN_00289b40();
    return;
  }
  *(undefined4 *)*DAT_00469888 = 0xfffffffa;
  if (puVar2[2] <= *puVar2) {
    FUN_0028a460();
    puVar2 = DAT_00469888;
  }
  *puVar2 = *puVar2 + 0x10;
  return;
}
