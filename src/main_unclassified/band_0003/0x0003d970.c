/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9E455E63C4AD7FE1D535A514E4ED3472CC95974BEC83075F02725CB163B9A837
 * Entry: 0x0003d970, Ghidra index: 457, label: FUN_0003d970
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a4f64;
void FUN_0003d970(void)

{
  int *in_EAX;
  int *piVar1;
  int *in_ECX;
  int *local_4;
  
  local_4 = in_ECX;
  FUN_000161b0();
  if (local_4 == (int *)in_ECX[3]) {
    piVar1 = (int *)FUN_002ea01d(0x38);
    local_4 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      piVar1[3] = 0;
      piVar1[8] = 0;
      piVar1[1] = 0;
      *piVar1 = (int)&PTR_FUN_003a4f64;
      piVar1[6] = 0;
      piVar1[5] = 0;
      piVar1[4] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[9] = 0;
      *(byte *)(piVar1 + 0xd) = *(byte *)(piVar1 + 0xd) & 0xfe;
      local_4 = piVar1;
    }
    if (local_4 != in_EAX) {
      FUN_00055650();
    }
    FUN_0003ee50(&local_4);
  }
  else {
    *(byte *)(*local_4 + 0x34) = *(byte *)(*local_4 + 0x34) | 1;
    FUN_0003d810();
    local_4 = (int *)CONCAT31(local_4._1_3_,(char)in_ECX[5]);
    if (4 < (int)(in_ECX[3] - in_ECX[2] & 0xfffffffcU)) {
      FUN_0001d4c0(in_ECX[2],in_ECX[3],local_4,0,0);
      return;
    }
  }
  return;
}
