/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5162CCA1F52B2DE23E459C8546D2BD1F9A3E061968FE4486AC7488E49964E2C7
 * Entry: 0x002856b0, Ghidra index: 9075, label: FUN_002856b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003915c8;
undefined4 FUN_002856b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_003915c8;
    puVar1[2] = 1;
    puVar1[1] = 0;
    *param_1 = puVar1;
    return 1;
  }
  /* XBE 0x002856df-0x002856e4: XOR EAX,EAX; MOV DWORD PTR [EAX+4],EAX.\n   * Preserve guest DWORD write to 0x00000004 (including possible guest fault);\n   * native Windows guest-memory translation remains ABI_UNVERIFIED. */\n  *(volatile undefined4 *)(uintptr_t)UINT32_C(0x00000004) = 0;
  *param_1 = 0;
  return 1;
}
