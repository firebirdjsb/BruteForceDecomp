/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C52AAA0A41539C7BA3E02054C5E33A49589748A0FA79CCA3478AB9EC32E1D67D
 * Entry: 0x00270790, Ghidra index: 8790, label: FUN_00270790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004051a4;
extern uint32_t DAT_004051a6;
extern char s___f__f__f__f___004051a8[];
extern char s_someone_is_using_get_string_0040dbb4[];
undefined4 FUN_00270790(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  undefined4 uVar5;
  uint uVar6;
  /* Original 0x002707BB LEA [ESP+0x08] gives the initial count
   * output. Both capacity-retry calls at 0x0027088E/0x00270928
   * use the EXACT SAME [ESP+0x08] output DWORD, reloaded by
   * MOV EDX,[ESP+0x08] afterwards. One guest slot, not two
   * synthetic stack addresses. Native XAPI stream ABI unverified. */
  uint uStack_228;
  undefined4 uStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  undefined2 uStack_210;
  undefined1 uStack_20e;
  
  fStack_220 = (float)(**(code **)(*param_1 + 0x20))();
  if (fStack_220 == 0.0) {
    return 0x80004005;
  }
  fStack_21c = 0.0;
  (**(code **)(*param_1 + 0x28))(&uStack_228);
  XAPILIB__OutputDebugStringA(s_someone_is_using_get_string_0040dbb4);
  iVar2 = FUN_002eaa86();
  uVar6 = 0;
  if (uStack_228 != 0) {
    do {
      iVar3 = (**(code **)(*param_1 + 0x24))();
      if ((iVar3 != -1) && (cVar1 = (**(code **)(*param_1 + 0x14))(), cVar1 != '\0')) {
        FUN_002eaa86((int)&uStack_210 + iVar2,s___f__f__f__f___004051a8,(double)fStack_21c,
                     (double)fStack_214,(double)fStack_220,(double)fStack_218);
        pcVar4 = (char *)&uStack_210;
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if ((char *)unaff_ESI[2] < pcVar4 + (unaff_ESI[3] - ((int)&uStack_210 + 1))) {
          uVar5 = 0;
          (**(code **)(*(int *)*unaff_ESI + 0x14))
                    ((int *)*unaff_ESI,unaff_ESI[1],unaff_ESI[3],&uStack_228);
          if (unaff_EDI != unaff_ESI[3]) {
            uVar5 = 0x80004005;
          }
          unaff_ESI[3] = 0;
          uStack_224 = uVar5;
        }
        iVar2 = FUN_002eaa86();
        unaff_ESI[3] = unaff_ESI[3] + iVar2;
        iVar2 = 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uStack_228);
  }
  uStack_20e = DAT_004051a6;
  pcVar4 = (char *)&uStack_210;
  uStack_210 = DAT_004051a4;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = uStack_224;
  if ((char *)unaff_ESI[2] < pcVar4 + (unaff_ESI[3] - ((int)&uStack_210 + 1))) {
    uVar5 = 0;
    (**(code **)(*(int *)*unaff_ESI + 0x14))
              ((int *)*unaff_ESI,unaff_ESI[1],unaff_ESI[3],&uStack_228);
    if (unaff_EDI != unaff_ESI[3]) {
      uVar5 = 0x80004005;
    }
    unaff_ESI[3] = 0;
  }
  iVar2 = FUN_002eaa86();
  unaff_ESI[3] = unaff_ESI[3] + iVar2;
  return uVar5;
}
