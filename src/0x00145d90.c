/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DBEE20C48999EB02AB74CD1C314C333A27C1708061026CF975D2694E3F95391F
 * Entry: 0x00145d90, Ghidra index: 4202, label: FUN_00145d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039c08c;
extern uint32_t PTR_LAB_0039b7e8;
void FUN_00145d90(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_001548f0();
  *in_ECX = &PTR_FUN_0039c08c;
  in_ECX[6] = &PTR_LAB_0039b7e8;
  in_ECX[0x54] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x55] = 0;
  FUN_00145cb0();
  in_ECX[1] = 0x13;
  local_10 = 0;
  local_c = 0;
  piVar2 = (int *)FUN_00279c40(&local_10);
  uVar1 = *(undefined4 *)(*piVar2 + 0x10);
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = uVar1;
  return;
}
