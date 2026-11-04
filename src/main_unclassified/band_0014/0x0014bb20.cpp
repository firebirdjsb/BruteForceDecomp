/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 872B884360737B6C104A9CF3EC6AA5C542CB5C1FEEFEA7AE72332AF325E46128
 * Entry: 0x0014bb20, Ghidra index: 4321, label: FUN_0014bb20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039b290;
void FUN_0014bb20(void)

{
  undefined4 *puVar1;
  undefined4 *in_EAX;
  int iVar2;
  
  in_EAX[1] = 0;
  /* XBE 0x0014bb26: MOV m32,0x0039b290 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039b290);
  iVar2 = 10;
  puVar1 = in_EAX;
  do {
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 4;
  } while (iVar2 != 0);
  in_EAX[0x2c] = 0;
  in_EAX[0x2e] = 0;
  in_EAX[0x2d] = 0;
  in_EAX[0x2a] = 0;
  in_EAX[1] = 0xe5d7152c;
  in_EAX[0x2f] = 0;
  return;
}
