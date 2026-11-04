/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 36AF2A18005D3FE846A3B926A27B738B06923AD7064DE2ABF3C4C2307BB001B9
 * Entry: 0x0001f940, Ghidra index: 151, label: FUN_0001f940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_002ea02b(void);
extern void FUN_0001f4f0(int param_1,uint param_2,uint param_3);

extern uint32_t PTR_FUN_003a401c;
void FUN_0001f940(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_002ea02b();
  /* XBE 0x0001f94d: MOV m32,0x003a401c stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_ECX = UINT32_C(0x003a401c);
  in_ECX[8] = 0;
  in_ECX[9] = 0xf;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_0001f4f0(param_1,0,0xffffffff);
  return;
}
