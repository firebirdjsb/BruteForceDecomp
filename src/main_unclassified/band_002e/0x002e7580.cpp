/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 205EC72C6826C01320D87261F17580333696C778127427C642D63532DBCCC1F2
 * Entry: 0x002e7580, Ghidra index: 10509, label: FUN_002e7580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003868c8;
void FUN_002e7580(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)((int)in_ECX + 7) = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  *(undefined1 *)((int)in_ECX + 5) = 0;
  *in_ECX = PTR_LAB_003868c8;
  *(undefined1 *)((int)in_ECX + 6) = 0xff;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[3] = 0xffffffff;
  in_ECX[4] = 0xffffffff;
  return;
}
