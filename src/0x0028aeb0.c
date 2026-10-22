/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD0466E924277A77109663EAFE3286A874BC52337906827B2018E66637DE4B61
 * Entry: 0x0028aeb0, Ghidra index: 9176, label: FUN_0028aeb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbox_crt_stream_opaque.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_003b6988;
extern uint32_t DAT_00404a88;
extern uint32_t DAT_00404c78;
extern char s_____s_0040464c[];
extern char s__stdin__00404654[];
undefined4 FUN_0028aeb0(char *param_1)

{
  int __c;
  undefined4 uVar1;
  FILE *__stream;
  undefined4 local_220;
  undefined1 *local_21c;
  code *local_218;
  FILE *local_214;
  undefined1 *local_210;
  undefined1 local_20c [260];
  undefined1 local_108 [264];
  
  if (param_1 == (char *)0x0) {
    __stream = (FILE *)&DAT_003b6988;
  }
  else {
    __stream = (FILE *)FUN_002eb08c(param_1,&DAT_00404a88);
    if (__stream == (FILE *)0x0) {
      return 2;
    }
  }
  __c = FID_conflict__getc(__stream);
  FID_conflict__ungetc(__c,__stream);
  if (__c == 0x1b) {
    __stream = _freopen(param_1,&DAT_00404c78,__stream);
  }
  if (param_1 == (char *)0x0) {
    param_1 = s__stdin__00404654;
  }
  FUN_002eaa86(local_108,s_____s_0040464c,0x102,param_1);
  if (__stream != (FILE *)0x0) {
    local_21c = local_20c;
    local_210 = local_108;
    local_220 = 0;
    local_218 = FUN_0029c4e0;
    local_214 = __stream;
  }
  uVar1 = FUN_0028ad80(&local_220);
  if (__stream != (FILE *)&DAT_003b6988) {
    _fclose(__stream);
  }
  return uVar1;
}
