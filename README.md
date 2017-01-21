# Drupal 7 Deployment Module
## A Continuous Integration Tool for specific Drupal Use-Cases

## Warning!

The Deployment Module, built using the principles outlined in http://blog.dcycle.com/blog/44/what-site-deployment-module/ and the [**Dcycle Manifesto**](http://blog.dcycle.com/manifesto/ "Dcycle Manifesto"), is not necessarly the *best* solution to management and Deployment of Code/Configuration.

If choosing to use the Deployment Module, a great deal of research and review should be done beforehand to understand the background requirements (namespacing, order-of-operations, etc.) outlined for Drupal 7 Deployment modules.

The main precept of the Dcycle Manifesto is part of the root behind the Configuration Management push in Drupal 8:

### 1.1 All configuration should be Code

This philosophy supports Continuous Integration (CI) by ensuring any/all changes made to the Database, Codebase, Configuration, etc. are all hard-saved in a replicable, sustainable, testable, and, finally, **deployable** format.

Thus, with a well configured Deployment module in a Git Repository, fifty sites could be updated simultaneously, **with confidence**, after a new Commit is applied to the `master` branch.

## Deployment, Testing, and Continuous Integration

### Step 1 - Build the Deployment Module, Deploy it, and Incrementally Apply Updates

### Step 2 - Test it thoroughly, using up-to-date copies of current sites

### Step 3 - Use [Git](https://git-scm.com/ "Git") and (for example) [Jenkins](https://jenkins.io/index.html "Jenkins") or [GitHub Webhooks](https://developer.github.com/webhooks/ "GitHub WebHooks") to Distribute Code/Configuration Updates
