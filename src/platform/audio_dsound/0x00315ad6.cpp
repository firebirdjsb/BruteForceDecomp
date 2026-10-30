/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8C5ADB24C70922C7FC4C75051D050B365CC898F6EE8E572004DB21CEC7D949F7
 * Entry: 0x00315ad6, Ghidra index: 12114, label: FUN_00315ad6
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7cc;
extern uint32_t DAT_0032f7d0;
extern uint32_t PTR_FUN_00386a14;
extern uint32_t PTR_LAB_003869e0;
extern uint32_t PTR_LAB_00386a10;
void FUN_00315ad6(int param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_LAB_003869e0;
  in_ECX[1] = 1;
  FUN_0031bb7e(param_1);
  FUN_00314d62(param_1 + 0x34);
  FUN_00319abe(param_1 + 0x74);
  *in_ECX = &PTR_FUN_00386a14;
  in_ECX[2] = &PTR_LAB_00386a10;
  in_ECX[0xa4] = &DAT_0032f7cc;
  in_ECX[0xa5] = &DAT_0032f7d0;
  FUN_0031aa6e();
  puVar1 = in_ECX + 0x1b0;
  iVar2 = 3;
  do {
    puVar1[1] = puVar1;
    *puVar1 = puVar1;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = in_ECX + 0x1b6;
  in_ECX[0x1b7] = puVar1;
  *puVar1 = puVar1;
  puVar1 = in_ECX + 0x1b8;
  in_ECX[0x1b9] = puVar1;
  *puVar1 = puVar1;
  puVar1 = in_ECX + 0x1ba;
  in_ECX[0x1bb] = puVar1;
  *puVar1 = puVar1;
  *(undefined4 *)in_ECX[0xa4] = 0xc0;
  *(undefined4 *)in_ECX[0xa5] = 0x40;
  return;
}
