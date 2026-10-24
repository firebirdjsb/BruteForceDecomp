/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1A77CD69B10F9B37251E69EDFD193C1E053BF4DC91A88E36F455B6CA7CD998AE
 * Entry: 0x002eac34, Ghidra index: 10598, label: FUN_002eac34
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6c10;
float10 FUN_002eac34(double param_1)

{
  double dVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  uint64_t bf_double_bits;
  memcpy(&bf_double_bits, &param_1, sizeof(bf_double_bits));
  uVar2 = __ctrlfp(DAT_003b6c10,0xffff);
  if ((((uint16_t)(bf_double_bits >> 48)) & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype();
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)param_1;
      }
      if (iVar3 == 3) {
        fVar4 = (float10)__handle_qnan1();
        return fVar4;
      }
    }
    dVar1 = param_1 + 1.0;
    uVar5 = 8;
  }
  else {
    fVar4 = (float10)FUN_002eca8b((uint32_t)bf_double_bits,(int32_t)(bf_double_bits >> 32));
    dVar1 = (double)fVar4;
    if ((fVar4 == (float10)param_1) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar1;
    }
    uVar5 = 0x10;
  }
  fVar4 = (float10)FUN_002ec9eb(uVar5,0xc,param_1,dVar1,uVar2);
  return fVar4;
}
