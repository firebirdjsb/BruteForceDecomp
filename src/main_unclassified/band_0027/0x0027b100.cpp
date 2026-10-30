/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 11EDD53E28A92154C52C06F9369EE6DA101A72134D46778ED334979C7EB7C88D
 * Entry: 0x0027b100, Ghidra index: 8960, label: FUN_0027b100
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_0123456789__00404fd8[];
extern char s__0123456789__00404fe4[];
undefined4 FUN_0027b100(undefined4 param_1,int *param_2,float *param_3)

{
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  float10 fVar4;
  float local_c [3];
  
  uVar3 = 0;
  while (pcVar1 = _strpbrk((char *)*param_2,s__0123456789__00404fe4), pcVar1 != (char *)0x0) {
    _strspn(pcVar1,s_0123456789__00404fd8);
    sVar2 = _strspn(pcVar1,s__0123456789__00404fe4);
    if (sVar2 == 0) {
      return 0;
    }
    fVar4 = (float10)FUN_002eb1c4(pcVar1);
    local_c[uVar3] = (float)fVar4;
    pcVar1 = pcVar1 + sVar2;
    *param_2 = (int)pcVar1;
    if ((*pcVar1 == '}') && (uVar3 != 2)) goto LAB_0027b1a8;
    uVar3 = uVar3 + 1;
    *param_2 = (int)(pcVar1 + 1);
    if (2 < uVar3) {
      if (uVar3 != 3) {
        return 0;
      }
      *param_3 = local_c[0];
      param_3[1] = local_c[1];
      param_3[2] = local_c[2];
      return 1;
    }
  }
  if (uVar3 != 0) {
    return 0;
  }
LAB_0027b1a8:
  *param_2 = 0;
  return 0;
}
