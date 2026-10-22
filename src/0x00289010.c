/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 45DA813EC65301E20D5C795693C3EEE39E6416548823C786EF6A5B8431FDEC30
 * Entry: 0x00289010, Ghidra index: 9122, label: FUN_00289010
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00404c78;
extern uint32_t PTR_FUN_003bc650;
extern uint32_t PTR_FUN_003bc654;
undefined4 FUN_00289010(undefined4 param_1)

{
  undefined4 uVar1;
  FILE *__stream;
  long lVar2;
  int iVar3;
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    uVar1 = (*(code *)PTR_FUN_003bc654)(*unaff_ESI);
    return uVar1;
  }
  __stream = (FILE *)FUN_002eb08c(param_1,&DAT_00404c78);
  if (__stream != (FILE *)0x0) {
    FUN_002eb5a6(__stream,0,2);
    lVar2 = _ftell(__stream);
    FUN_002eb5a6(__stream,0,0);
    iVar3 = (*(code *)PTR_FUN_003bc650)(lVar2);
    *unaff_ESI = iVar3;
    iVar3 = FUN_002eb78d(iVar3,1,lVar2,__stream);
    if (iVar3 != lVar2) {
      uVar1 = (*(code *)PTR_FUN_003bc654)(*unaff_ESI);
      return uVar1;
    }
    unaff_ESI[1] = lVar2;
    _fclose(__stream);
    unaff_ESI[0x104] = 0;
    unaff_ESI[3] = 10;
    unaff_ESI[2] = *unaff_ESI;
    return 1;
  }
  unaff_ESI[2] = *unaff_ESI;
  unaff_ESI[0x104] = 0;
  unaff_ESI[3] = 10;
  return 0;
}
