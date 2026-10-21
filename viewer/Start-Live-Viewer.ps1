param(
    [string]$ExportSource = "D:\Downloads\BruteForce-Decompilation\FunctionExport",
    [string]$Workspace = "D:\Downloads\BruteForce-Decompilation\LiveReview",
    [int]$Port = 8765
)
$ErrorActionPreference = 'Stop'
Set-Location -LiteralPath $PSScriptRoot
if (-not (Test-Path -LiteralPath $ExportSource)) {
    $candidates = @(
        'D:\Downloads\FunctionExport.zip',
        'D:\Downloads\BruteForce-Decompilation\FunctionExport.zip'
    )
    $match = $candidates | Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
    if ($match) { $ExportSource = $match }
    else { throw "Cannot find the FunctionExport folder or ZIP. Supply -ExportSource with the correct path." }
}
$python = if (Get-Command py -ErrorAction SilentlyContinue) { 'py' } elseif (Get-Command python -ErrorAction SilentlyContinue) { 'python' } else { throw 'Python 3 is required but not found.' }
Write-Host "Opening Brute Force live viewer from $ExportSource" -ForegroundColor Cyan
if ($python -eq 'py') { & py -3 "$PSScriptRoot\viewer.py" --source $ExportSource --workspace $Workspace --port $Port }
else { & python "$PSScriptRoot\viewer.py" --source $ExportSource --workspace $Workspace --port $Port }
