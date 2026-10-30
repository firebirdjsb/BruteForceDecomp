/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45891D6855064D5DD486BFBCBF51A998F3F761CE97A43C8C1DFEE48250C1BB59
 * Entry: 0x00166b30, Ghidra index: 4725, label: FUN_00166b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0041f500;
extern uint32_t DAT_0041f504;
extern uint32_t DAT_0041f508;
extern uint32_t DAT_0041f50c;
extern uint32_t DAT_0046d2b4;
extern uint32_t DAT_0046d2b8;
extern uint32_t DAT_0046d2bc;
extern uint32_t _DAT_0046d2c0;
extern uint32_t _DAT_0046d2c4;
extern uint32_t _DAT_0046d2c8;
extern uint32_t _DAT_0046d2cc;
extern uint32_t _DAT_0046d2d0;
extern uint32_t _DAT_0046d2d4;
extern uint32_t _DAT_0046d2d8;
extern uint32_t _DAT_0046d2dc;
extern uint32_t _DAT_0046d2e0;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00166b30(void)

{
  float fVar1;
  float fVar2;
  float *in_EAX;
  uint in_ECX;
  
  fVar1 = 0.0;
  *in_EAX = 0.0;
  in_EAX[1] = 0.0;
  in_EAX[2] = 0.0;
  if ((in_ECX & 1) != 0) {
    fVar1 = *(float *)(&DAT_0041f500 + in_ECX * 0x10);
    *in_EAX = DAT_0046d2b4 * fVar1;
    in_EAX[1] = DAT_0046d2b8 * fVar1;
    in_EAX[2] = DAT_0046d2bc * fVar1;
  }
  if ((in_ECX & 2) != 0) {
    fVar2 = *(float *)(&DAT_0041f504 + in_ECX * 0x10);
    fVar1 = fVar2 + fVar1;
    *in_EAX = _DAT_0046d2c0 * fVar2 + *in_EAX;
    in_EAX[1] = _DAT_0046d2c4 * fVar2 + in_EAX[1];
    in_EAX[2] = _DAT_0046d2c8 * fVar2 + in_EAX[2];
  }
  if ((in_ECX & 4) != 0) {
    fVar2 = *(float *)(&DAT_0041f508 + in_ECX * 0x10);
    fVar1 = fVar2 + fVar1;
    *in_EAX = _DAT_0046d2cc * fVar2 + *in_EAX;
    in_EAX[1] = _DAT_0046d2d0 * fVar2 + in_EAX[1];
    in_EAX[2] = _DAT_0046d2d4 * fVar2 + in_EAX[2];
  }
  if ((in_ECX & 8) != 0) {
    fVar2 = *(float *)(&DAT_0041f50c + in_ECX * 0x10);
    fVar1 = fVar2 + fVar1;
    *in_EAX = _DAT_0046d2d8 * fVar2 + *in_EAX;
    in_EAX[1] = _DAT_0046d2dc * fVar2 + in_EAX[1];
    in_EAX[2] = _DAT_0046d2e0 * fVar2 + in_EAX[2];
  }
  fVar1 = 1.0 / fVar1;
  *in_EAX = fVar1 * *in_EAX;
  in_EAX[1] = fVar1 * in_EAX[1];
  in_EAX[2] = fVar1 * in_EAX[2];
  return;
}
